//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMethodSignature, NSString, Protocol;

@protocol AWECrotocol <NSObject>
+ (NSString *)debugDescription;
+ (NSString *)description;
+ (Class)class;
+ (Class)superclass;
+ (_Bool)isSubclassOfClass:(Class)arg1;
+ (NSMethodSignature *)instanceMethodSignatureForSelector:(SEL)arg1;
+ (CDUnknownFunctionPointerType)instanceMethodForSelector:(SEL)arg1;
+ (_Bool)conformsToProtocol:(Protocol *)arg1;
+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)alloc;
+ (id)new;
@end

