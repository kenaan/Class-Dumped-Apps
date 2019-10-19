//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/RUIActionSheetViewController.h>

@class NSObject, NSString, NSURL;
@protocol AnalyticsViewProtocol, OpenBrowserActionViewDelegate;

@interface OpenBrowserActionViewController : RUIActionSheetViewController
{
    id <AnalyticsViewProtocol> _sourceView;
    NSObject<OpenBrowserActionViewDelegate> *_browserActionDelegate;
    NSURL *_URL;
    NSString *_pageTitle;
}

+ (void)openBrowserActionViewController:(id)arg1 didSelectItem:(id)arg2;
+ (id)createViewControllerWithURL:(id)arg1 browserActionDelegate:(id)arg2;
@property(readonly) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak NSObject<OpenBrowserActionViewDelegate> *browserActionDelegate; // @synthesize browserActionDelegate=_browserActionDelegate;
@property(nonatomic) __weak id <AnalyticsViewProtocol> sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (void)handleSelectionOfItem:(id)arg1;
- (void)userDidSelectPostToReddit;
- (void)userDidSelectRefresh;
- (void)userDidSelectShare;
- (void)userDidSelectOpenInChrome;
- (void)userDidSelectOpenInSafari;
- (void)populateActionItems;
- (id)initWithURL:(id)arg1 browserActionDelegate:(id)arg2;

@end
