//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber;

@interface AWEOneDayViewUserResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    NSArray *_viewUsers;
    NSNumber *_cursor;
    NSNumber *_total;
}

+ (id)viewUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSArray *viewUsers; // @synthesize viewUsers=_viewUsers;
- (void).cxx_destruct;

@end

