//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class AWEDelegateProxyFallback;

@interface AWEDelegateProxy : NSProxy
{
    id _target;
    AWEDelegateProxyFallback *_fallback;
}

+ (id)proxyWithTarget:(id)arg1;
@property(retain, nonatomic) AWEDelegateProxyFallback *fallback; // @synthesize fallback=_fallback;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)redirectToDebugger:(id)arg1;
- (id)debugDescription;
- (id)description;
- (_Bool)isProxy;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
- (Class)superclass;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)changeTarget:(id)arg1;
- (id)initWithTarget:(id)arg1;

@end

