//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUHashFieldPointer-Protocol.h"

@class NSString;

@protocol SOJUStoryPointer <NSObject, NSCoding, NSCopying, SOJUHashFieldPointer>
@property(readonly, copy, nonatomic) NSString *mId;
@property(readonly, copy, nonatomic) NSString *mField;
@property(readonly, copy, nonatomic) NSString *mKey;
@end
