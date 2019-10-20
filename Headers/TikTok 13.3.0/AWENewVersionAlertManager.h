//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, UIWindow;

@interface AWENewVersionAlertManager : NSObject
{
    _Bool _alertViewIsShown;
    UIWindow *_window;
    UIWindow *_lastKeyWindow;
    UIViewController *_windowRootViewController;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool alertViewIsShown; // @synthesize alertViewIsShown=_alertViewIsShown;
@property(retain, nonatomic) UIViewController *windowRootViewController; // @synthesize windowRootViewController=_windowRootViewController;
@property(retain, nonatomic) UIWindow *lastKeyWindow; // @synthesize lastKeyWindow=_lastKeyWindow;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)buildVersionString;
- (void)getTFLinkResponseCompletion:(CDUnknownBlockType)arg1;
- (void)hideWindow;
- (void)showAlertViewWithInfo:(id)arg1 confirmAction:(CDUnknownBlockType)arg2 cancelAction:(CDUnknownBlockType)arg3;
- (void)checkInhouseNewVersion;
- (void)checkAppNewVersionInhouseWithDelay;
- (void)checkInhouseNewVersionWithDelay;
- (void)checkAppNewVersionTestFlight;
- (void)checkAppNewVersionInhouse;
- (void)splashDidFinished;
- (void)dealloc;
- (void)checkAppNewVersion;

@end
