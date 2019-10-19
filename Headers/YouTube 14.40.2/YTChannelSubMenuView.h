//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"

@class FLXLayout, NSString, UIControl, YTDropdownButton, YTFormattedStringLabel, YTIChannelSubMenuRenderer, YTQTMButton;

@interface YTChannelSubMenuView : UIView <YTPageStyling>
{
    YTIChannelSubMenuRenderer *_renderer;
    FLXLayout *_layout;
    UIView *_contentView;
    UIControl *_sortTarget;
    double _height;
    id <YTChannelSubMenuViewDelegate> _delegate;
    YTDropdownButton *_dropdownButton;
    YTFormattedStringLabel *_textLabel;
    YTQTMButton *_settingsButton;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) YTQTMButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) YTFormattedStringLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) YTDropdownButton *dropdownButton; // @synthesize dropdownButton=_dropdownButton;
@property(nonatomic) __weak id <YTChannelSubMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapSettingsButton;
- (id)root;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setRenderer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
