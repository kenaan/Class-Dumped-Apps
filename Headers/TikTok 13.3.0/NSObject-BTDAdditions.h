//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (BTDAdditions)
+ (id)btd_className;
+ (_Bool)btd_swizzleClassMethod:(SEL)arg1 with:(SEL)arg2;
+ (_Bool)btd_swizzleInstanceMethod:(SEL)arg1 with:(SEL)arg2;
+ (void)btd_setInv:(id)arg1 withSig:(id)arg2 andArgs:(char *)arg3;
+ (id)btd_getReturnFromInv:(id)arg1 withSig:(id)arg2;
- (id)btd_safeJsonObject;
- (id)btd_className;
- (void)btd_performSelectorWithArgsInBackground:(SEL)arg1;
- (id)btd_performSelectorWithArgs:(SEL)arg1 onThread:(id)arg2 waitUntilDone:(_Bool)arg3;
- (id)btd_performSelectorWithArgsOnMainThread:(SEL)arg1 waitUntilDone:(_Bool)arg2;
- (void)btd_performSelectorWithArgs:(SEL)arg1 afterDelay:(double)arg2;
- (id)btd_performSelectorWithArgs:(SEL)arg1;
@end

