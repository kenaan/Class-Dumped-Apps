//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;

@protocol ACCDeepLinkProtocol <NSObject>
- (_Bool)openDeepLink:(NSURL *)arg1 sourceType:(unsigned long long)arg2 prepareBlock:(NSDictionary * (^)(NSString *))arg3 completion:(void (^)(_Bool, NSString *))arg4;
- (_Bool)openDeepLink:(NSURL *)arg1 sourceType:(unsigned long long)arg2 prepareBlock:(NSDictionary * (^)(NSString *))arg3;
@end

