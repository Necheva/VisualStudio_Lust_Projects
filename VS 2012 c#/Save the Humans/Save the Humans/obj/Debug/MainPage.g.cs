﻿

#pragma checksum "C:\Users\Владимир\Desktop\VS 2012 c#\Save the Humans\Save the Humans\MainPage.xaml" "{406ea660-64cf-4c82-b6f0-42d48172a799}" "91B25B80F2A611DD6EBFB6E5EFD8A079"
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace Save_the_Humans
{
    partial class MainPage : global::Save_the_Humans.Common.LayoutAwarePage, global::Windows.UI.Xaml.Markup.IComponentConnector
    {
        [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.Windows.UI.Xaml.Build.Tasks"," 4.0.0.0")]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
 
        public void Connect(int connectionId, object target)
        {
            switch(connectionId)
            {
            case 1:
                #line 50 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.Controls.Primitives.ButtonBase)(target)).Click += this.startButton_Click;
                 #line default
                 #line hidden
                break;
            case 2:
                #line 56 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.UIElement)(target)).PointerMoved += this.playArea_PointerMoved;
                 #line default
                 #line hidden
                #line 56 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.UIElement)(target)).PointerExited += this.playArea_PointerExited;
                 #line default
                 #line hidden
                break;
            case 3:
                #line 63 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.UIElement)(target)).PointerPressed += this.human_PointerPressed;
                 #line default
                 #line hidden
                break;
            case 4:
                #line 68 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.UIElement)(target)).PointerEntered += this.target_PointerEntered;
                 #line default
                 #line hidden
                break;
            case 5:
                #line 47 "..\..\MainPage.xaml"
                ((global::Windows.UI.Xaml.Controls.Primitives.ButtonBase)(target)).Click += this.GoBack;
                 #line default
                 #line hidden
                break;
            }
            this._contentLoaded = true;
        }
    }
}

