/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface EKUILocationEditItemCell : UITableViewCell {
    UIButton *_clearButton;
    id _clearButtonTapped;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
    UILabel *_title;
}

@property(copy) id clearButtonTapped;

- (void).cxx_destruct;
- (void)_clearButtonTapped:(id)arg1;
- (id)clearButtonTapped;
- (id)description;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setClearButtonTapped:(id)arg1;
- (void)updateWithName:(id)arg1 sourceSupportsAvailability:(bool)arg2 availabilityRequestInProgress:(bool)arg3 availabilityType:(long long)arg4;

@end