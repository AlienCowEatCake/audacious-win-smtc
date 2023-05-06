// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Automation_2_H
#define WINRT_Windows_UI_Xaml_Automation_2_H
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation
{
    struct WINRT_IMPL_EMPTY_BASES AnnotationPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers
    {
        AnnotationPatternIdentifiers(std::nullptr_t) noexcept {}
        AnnotationPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AnnotationTypeIdProperty();
        [[nodiscard]] static auto AnnotationTypeNameProperty();
        [[nodiscard]] static auto AuthorProperty();
        [[nodiscard]] static auto DateTimeProperty();
        [[nodiscard]] static auto TargetProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES AutomationAnnotation : winrt::Windows::UI::Xaml::Automation::IAutomationAnnotation,
        impl::base<AutomationAnnotation, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AutomationAnnotation, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AutomationAnnotation(std::nullptr_t) noexcept {}
        AutomationAnnotation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IAutomationAnnotation(ptr, take_ownership_from_abi) {}
        AutomationAnnotation();
        explicit AutomationAnnotation(winrt::Windows::UI::Xaml::Automation::AnnotationType const& type);
        AutomationAnnotation(winrt::Windows::UI::Xaml::Automation::AnnotationType const& type, winrt::Windows::UI::Xaml::UIElement const& element);
        [[nodiscard]] static auto TypeProperty();
        [[nodiscard]] static auto ElementProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES AutomationElementIdentifiers : winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiers
    {
        AutomationElementIdentifiers(std::nullptr_t) noexcept {}
        AutomationElementIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AcceleratorKeyProperty();
        [[nodiscard]] static auto AccessKeyProperty();
        [[nodiscard]] static auto AutomationIdProperty();
        [[nodiscard]] static auto BoundingRectangleProperty();
        [[nodiscard]] static auto ClassNameProperty();
        [[nodiscard]] static auto ClickablePointProperty();
        [[nodiscard]] static auto ControlTypeProperty();
        [[nodiscard]] static auto HasKeyboardFocusProperty();
        [[nodiscard]] static auto HelpTextProperty();
        [[nodiscard]] static auto IsContentElementProperty();
        [[nodiscard]] static auto IsControlElementProperty();
        [[nodiscard]] static auto IsEnabledProperty();
        [[nodiscard]] static auto IsKeyboardFocusableProperty();
        [[nodiscard]] static auto IsOffscreenProperty();
        [[nodiscard]] static auto IsPasswordProperty();
        [[nodiscard]] static auto IsRequiredForFormProperty();
        [[nodiscard]] static auto ItemStatusProperty();
        [[nodiscard]] static auto ItemTypeProperty();
        [[nodiscard]] static auto LabeledByProperty();
        [[nodiscard]] static auto LocalizedControlTypeProperty();
        [[nodiscard]] static auto NameProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto LiveSettingProperty();
        [[nodiscard]] static auto ControlledPeersProperty();
        [[nodiscard]] static auto PositionInSetProperty();
        [[nodiscard]] static auto SizeOfSetProperty();
        [[nodiscard]] static auto LevelProperty();
        [[nodiscard]] static auto AnnotationsProperty();
        [[nodiscard]] static auto LandmarkTypeProperty();
        [[nodiscard]] static auto LocalizedLandmarkTypeProperty();
        [[nodiscard]] static auto IsPeripheralProperty();
        [[nodiscard]] static auto IsDataValidForFormProperty();
        [[nodiscard]] static auto FullDescriptionProperty();
        [[nodiscard]] static auto DescribedByProperty();
        [[nodiscard]] static auto FlowsToProperty();
        [[nodiscard]] static auto FlowsFromProperty();
        [[nodiscard]] static auto CultureProperty();
        [[nodiscard]] static auto HeadingLevelProperty();
        [[nodiscard]] static auto IsDialogProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES AutomationProperties : winrt::Windows::UI::Xaml::Automation::IAutomationProperties
    {
        AutomationProperties(std::nullptr_t) noexcept {}
        AutomationProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IAutomationProperties(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AcceleratorKeyProperty();
        static auto GetAcceleratorKey(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetAcceleratorKey(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto AccessKeyProperty();
        static auto GetAccessKey(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetAccessKey(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto AutomationIdProperty();
        static auto GetAutomationId(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetAutomationId(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto HelpTextProperty();
        static auto GetHelpText(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetHelpText(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto IsRequiredForFormProperty();
        static auto GetIsRequiredForForm(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsRequiredForForm(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto ItemStatusProperty();
        static auto GetItemStatus(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetItemStatus(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto ItemTypeProperty();
        static auto GetItemType(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetItemType(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto LabeledByProperty();
        static auto GetLabeledBy(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetLabeledBy(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::UIElement const& value);
        [[nodiscard]] static auto NameProperty();
        static auto GetName(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetName(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto LiveSettingProperty();
        static auto GetLiveSetting(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetLiveSetting(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting const& value);
        [[nodiscard]] static auto AccessibilityViewProperty();
        static auto GetAccessibilityView(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetAccessibilityView(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Automation::Peers::AccessibilityView const& value);
        [[nodiscard]] static auto ControlledPeersProperty();
        static auto GetControlledPeers(winrt::Windows::UI::Xaml::DependencyObject const& element);
        [[nodiscard]] static auto PositionInSetProperty();
        static auto GetPositionInSet(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetPositionInSet(winrt::Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto SizeOfSetProperty();
        static auto GetSizeOfSet(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetSizeOfSet(winrt::Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto LevelProperty();
        static auto GetLevel(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetLevel(winrt::Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto AnnotationsProperty();
        static auto GetAnnotations(winrt::Windows::UI::Xaml::DependencyObject const& element);
        [[nodiscard]] static auto LandmarkTypeProperty();
        static auto GetLandmarkType(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetLandmarkType(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType const& value);
        [[nodiscard]] static auto LocalizedLandmarkTypeProperty();
        static auto GetLocalizedLandmarkType(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetLocalizedLandmarkType(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto IsPeripheralProperty();
        static auto GetIsPeripheral(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsPeripheral(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto IsDataValidForFormProperty();
        static auto GetIsDataValidForForm(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsDataValidForForm(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto FullDescriptionProperty();
        static auto GetFullDescription(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetFullDescription(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto LocalizedControlTypeProperty();
        static auto GetLocalizedControlType(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetLocalizedControlType(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
        [[nodiscard]] static auto DescribedByProperty();
        static auto GetDescribedBy(winrt::Windows::UI::Xaml::DependencyObject const& element);
        [[nodiscard]] static auto FlowsToProperty();
        static auto GetFlowsTo(winrt::Windows::UI::Xaml::DependencyObject const& element);
        [[nodiscard]] static auto FlowsFromProperty();
        static auto GetFlowsFrom(winrt::Windows::UI::Xaml::DependencyObject const& element);
        [[nodiscard]] static auto CultureProperty();
        static auto GetCulture(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetCulture(winrt::Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto HeadingLevelProperty();
        static auto GetHeadingLevel(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetHeadingLevel(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel const& value);
        [[nodiscard]] static auto IsDialogProperty();
        static auto GetIsDialog(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsDialog(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
    };
    struct WINRT_IMPL_EMPTY_BASES AutomationProperty : winrt::Windows::UI::Xaml::Automation::IAutomationProperty
    {
        AutomationProperty(std::nullptr_t) noexcept {}
        AutomationProperty(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IAutomationProperty(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DockPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IDockPatternIdentifiers
    {
        DockPatternIdentifiers(std::nullptr_t) noexcept {}
        DockPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IDockPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto DockPositionProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES DragPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IDragPatternIdentifiers
    {
        DragPatternIdentifiers(std::nullptr_t) noexcept {}
        DragPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IDragPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto DropEffectProperty();
        [[nodiscard]] static auto DropEffectsProperty();
        [[nodiscard]] static auto GrabbedItemsProperty();
        [[nodiscard]] static auto IsGrabbedProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES DropTargetPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers
    {
        DropTargetPatternIdentifiers(std::nullptr_t) noexcept {}
        DropTargetPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto DropTargetEffectProperty();
        [[nodiscard]] static auto DropTargetEffectsProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES ExpandCollapsePatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers
    {
        ExpandCollapsePatternIdentifiers(std::nullptr_t) noexcept {}
        ExpandCollapsePatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ExpandCollapseStateProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES GridItemPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers
    {
        GridItemPatternIdentifiers(std::nullptr_t) noexcept {}
        GridItemPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ColumnProperty();
        [[nodiscard]] static auto ColumnSpanProperty();
        [[nodiscard]] static auto ContainingGridProperty();
        [[nodiscard]] static auto RowProperty();
        [[nodiscard]] static auto RowSpanProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES GridPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IGridPatternIdentifiers
    {
        GridPatternIdentifiers(std::nullptr_t) noexcept {}
        GridPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IGridPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ColumnCountProperty();
        [[nodiscard]] static auto RowCountProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES MultipleViewPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers
    {
        MultipleViewPatternIdentifiers(std::nullptr_t) noexcept {}
        MultipleViewPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto CurrentViewProperty();
        [[nodiscard]] static auto SupportedViewsProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES RangeValuePatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers
    {
        RangeValuePatternIdentifiers(std::nullptr_t) noexcept {}
        RangeValuePatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsReadOnlyProperty();
        [[nodiscard]] static auto LargeChangeProperty();
        [[nodiscard]] static auto MaximumProperty();
        [[nodiscard]] static auto MinimumProperty();
        [[nodiscard]] static auto SmallChangeProperty();
        [[nodiscard]] static auto ValueProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES ScrollPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IScrollPatternIdentifiers
    {
        ScrollPatternIdentifiers(std::nullptr_t) noexcept {}
        ScrollPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IScrollPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto HorizontallyScrollableProperty();
        [[nodiscard]] static auto HorizontalScrollPercentProperty();
        [[nodiscard]] static auto HorizontalViewSizeProperty();
        [[nodiscard]] static auto NoScroll();
        [[nodiscard]] static auto VerticallyScrollableProperty();
        [[nodiscard]] static auto VerticalScrollPercentProperty();
        [[nodiscard]] static auto VerticalViewSizeProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES SelectionItemPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers
    {
        SelectionItemPatternIdentifiers(std::nullptr_t) noexcept {}
        SelectionItemPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsSelectedProperty();
        [[nodiscard]] static auto SelectionContainerProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES SelectionPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers
    {
        SelectionPatternIdentifiers(std::nullptr_t) noexcept {}
        SelectionPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto CanSelectMultipleProperty();
        [[nodiscard]] static auto IsSelectionRequiredProperty();
        [[nodiscard]] static auto SelectionProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES SpreadsheetItemPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers
    {
        SpreadsheetItemPatternIdentifiers(std::nullptr_t) noexcept {}
        SpreadsheetItemPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto FormulaProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES StylesPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IStylesPatternIdentifiers
    {
        StylesPatternIdentifiers(std::nullptr_t) noexcept {}
        StylesPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IStylesPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ExtendedPropertiesProperty();
        [[nodiscard]] static auto FillColorProperty();
        [[nodiscard]] static auto FillPatternColorProperty();
        [[nodiscard]] static auto FillPatternStyleProperty();
        [[nodiscard]] static auto ShapeProperty();
        [[nodiscard]] static auto StyleIdProperty();
        [[nodiscard]] static auto StyleNameProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES TableItemPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers
    {
        TableItemPatternIdentifiers(std::nullptr_t) noexcept {}
        TableItemPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ColumnHeaderItemsProperty();
        [[nodiscard]] static auto RowHeaderItemsProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES TablePatternIdentifiers : winrt::Windows::UI::Xaml::Automation::ITablePatternIdentifiers
    {
        TablePatternIdentifiers(std::nullptr_t) noexcept {}
        TablePatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::ITablePatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ColumnHeadersProperty();
        [[nodiscard]] static auto RowHeadersProperty();
        [[nodiscard]] static auto RowOrColumnMajorProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES TogglePatternIdentifiers : winrt::Windows::UI::Xaml::Automation::ITogglePatternIdentifiers
    {
        TogglePatternIdentifiers(std::nullptr_t) noexcept {}
        TogglePatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::ITogglePatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ToggleStateProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES TransformPattern2Identifiers : winrt::Windows::UI::Xaml::Automation::ITransformPattern2Identifiers
    {
        TransformPattern2Identifiers(std::nullptr_t) noexcept {}
        TransformPattern2Identifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::ITransformPattern2Identifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto CanZoomProperty();
        [[nodiscard]] static auto ZoomLevelProperty();
        [[nodiscard]] static auto MaxZoomProperty();
        [[nodiscard]] static auto MinZoomProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES TransformPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::ITransformPatternIdentifiers
    {
        TransformPatternIdentifiers(std::nullptr_t) noexcept {}
        TransformPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::ITransformPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto CanMoveProperty();
        [[nodiscard]] static auto CanResizeProperty();
        [[nodiscard]] static auto CanRotateProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES ValuePatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IValuePatternIdentifiers
    {
        ValuePatternIdentifiers(std::nullptr_t) noexcept {}
        ValuePatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IValuePatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsReadOnlyProperty();
        [[nodiscard]] static auto ValueProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES WindowPatternIdentifiers : winrt::Windows::UI::Xaml::Automation::IWindowPatternIdentifiers
    {
        WindowPatternIdentifiers(std::nullptr_t) noexcept {}
        WindowPatternIdentifiers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Automation::IWindowPatternIdentifiers(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto CanMaximizeProperty();
        [[nodiscard]] static auto CanMinimizeProperty();
        [[nodiscard]] static auto IsModalProperty();
        [[nodiscard]] static auto IsTopmostProperty();
        [[nodiscard]] static auto WindowInteractionStateProperty();
        [[nodiscard]] static auto WindowVisualStateProperty();
    };
}
#endif
