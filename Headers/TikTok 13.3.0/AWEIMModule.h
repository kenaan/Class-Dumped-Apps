//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSModule-Protocol.h"

@class NSString, UIWindow;

@interface AWEIMModule : NSObject <HTSModule>
{
}

+ (void)load;
+ (unsigned long long)priority;
- (void)refreshFilterCommentStatus;
- (void)applicationRootViewDidAppear:(id)arg1;
- (void)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

