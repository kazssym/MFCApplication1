#include "pch.h"
#include "XamlDialog1.xaml.h"
#if __has_include("XamlDialog1.g.cpp")
#include "XamlDialog1.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::MFCApplication1::implementation
{
    int32_t XamlDialog1::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void XamlDialog1::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void XamlDialog1::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
    }
}
