//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class NSString;

@interface AWEIMSharePositiveTrendingMessage : AWEIMMessage
{
    NSString *_updateTime;
}

+ (id)identifier;
@property(retain, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

