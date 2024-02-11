#pragma once

#include "XamlDialog1.g.h"

namespace winrt::MFCApplication1::implementation
{
    struct XamlDialog1 : XamlDialog1T<XamlDialog1>
    {
        XamlDialog1()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::MFCApplication1::factory_implementation
{
    struct XamlDialog1 : XamlDialog1T<XamlDialog1, implementation::XamlDialog1>
    {
    };
}
