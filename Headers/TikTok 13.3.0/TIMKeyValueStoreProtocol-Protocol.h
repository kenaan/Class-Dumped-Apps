//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol TIMKeyValueStoreProtocol <NSObject>
- (void)setTexts:(NSDictionary *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSString *)textForKey:(NSString *)arg1;
- (void)setText:(NSString *)arg1 forKey:(NSString *)arg2;
@end

