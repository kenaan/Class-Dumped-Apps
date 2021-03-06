//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTStyledViewController.h"

@class YTAppSettingsStore, YTICommand, YTSettingsPickerViewController;

@interface YTPlayAsYouBrowseSettingsViewController : YTStyledViewController
{
    YTAppSettingsStore *_appSettings;
    YTSettingsPickerViewController *_settingsPickerViewController;
    id <YTResponder> _parentResponder;
    YTICommand *_navEndpoint;
}

@property(retain, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
- (id)parentResponder;
- (void).cxx_destruct;
- (void)dismiss;
- (id)settingsPickerViewController;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

@end

