//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FVRUserService;

@interface FVRQuickResponsesManager : NSObject
{
    FVRUserService *_userService;
}

@property(retain, nonatomic) FVRUserService *userService; // @synthesize userService=_userService;
- (void).cxx_destruct;
- (void)getUserQuickResponsesWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;

@end

