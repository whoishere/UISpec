
@class UIQuery;

@interface ViewFilterSwizzler : NSObject {
	UIQuery *textField, *navigationBar, *label, *button, *navigationButton, *alertView, *textView, *tableView, *tableViewCell, 
	*toolbar, *toolbarButton, *tabBar, *tabBarButton, *datePicker, *window, *webView, *view, *Switch, *slider, *segmentedControl,
	*searchBar, *scrollView, *progressView, *pickerView, *pageControl, *imageView, *control, *actionSheet, *activityIndicatorView,
	*threePartButton, *navigationItemButtonView, *navigationItemView, *removeControlMinusButton;
}

@property(nonatomic, readonly) UIQuery *textField, *navigationBar, *label, *button, *navigationButton, *alertView, *textView, *tableView, *tableViewCell, 
*toolbar, *toolbarButton, *tabBar, *tabBarButton, *datePicker, *window, *webView, *view, *Switch, *slider, *segmentedControl,
*searchBar, *scrollView, *progressView, *pickerView, *pageControl, *imageView, *control, *actionSheet, *activityIndicatorView,
*threePartButton, *navigationItemButtonView, *navigationItemView, *removeControlMinusButton;

@end
