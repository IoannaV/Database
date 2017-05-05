#include "form.h"
#include "formplugin.h"

#include <QtPlugin>

formPlugin::formPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void formPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool formPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *formPlugin::createWidget(QWidget *parent)
{
    return new form(parent);
}

QString formPlugin::name() const
{
    return QLatin1String("form");
}

QString formPlugin::group() const
{
    return QLatin1String("");
}

QIcon formPlugin::icon() const
{
    return QIcon();
}

QString formPlugin::toolTip() const
{
    return QLatin1String("");
}

QString formPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool formPlugin::isContainer() const
{
    return false;
}

QString formPlugin::domXml() const
{
    return QLatin1String("<widget class=\"form\" name=\"form\">\n</widget>\n");
}

QString formPlugin::includeFile() const
{
    return QLatin1String("form.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(formplugin, formPlugin)
#endif // QT_VERSION < 0x050000
