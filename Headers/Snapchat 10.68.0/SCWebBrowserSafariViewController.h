//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCWebBrowser-Protocol.h"
#import "SFSafariViewControllerDelegate-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSURL, SCWebBrowserConfig, SFSafariViewController;
@protocol SCWebBrowserDelegate;

@interface SCWebBrowserSafariViewController : UIViewController <SFSafariViewControllerDelegate, SCWebBrowser>
{
    SFSafariViewController *_safariViewController;
    SCWebBrowserConfig *_config;
    id <SCWebBrowserDelegate> _delegate;
    NSURL *_desiredURL;
    double _estimatedProgress;
}

+ (_Bool)isPreloadingSupported;
+ (id)browserName;
@property(nonatomic) double estimatedProgress; // @synthesize estimatedProgress=_estimatedProgress;
@property(retain, nonatomic) NSURL *desiredURL; // @synthesize desiredURL=_desiredURL;
@property(nonatomic) __weak id <SCWebBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCWebBrowserConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) SFSafariViewController *safariViewController; // @synthesize safariViewController=_safariViewController;
- (void).cxx_destruct;
- (void)safariViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setIsOffScreen:(_Bool)arg1;
@property(readonly, nonatomic) NSNumber *initialLoadStatusCode;
- (void)dealloc;
- (void)loadURL:(id)arg1;
- (void)reset;
@property(readonly, nonatomic) NSNumber *visibleContentYOffset;
@property(readonly, nonatomic) NSDictionary *javaScriptMetrics;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2 safeBrowsingChecker:(id)arg3 urlInterceptor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

