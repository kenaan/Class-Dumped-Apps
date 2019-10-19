//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, AWEUserModel, NSNumber, NSString;

@interface AWEUserTextNotificationModel : AWEBaseApiModel
{
    NSNumber *_task_id;
    NSString *_title;
    NSString *_content;
    NSString *_schemaURL;
    AWEURLModel *_imageURL;
    AWEUserModel *_user;
    long long _subType;
    NSString *_targetID;
    double _contentW;
    double _contentH;
}

+ (id)imageURLJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double contentH; // @synthesize contentH=_contentH;
@property(nonatomic) double contentW; // @synthesize contentW=_contentW;
@property(retain, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) AWEURLModel *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *schemaURL; // @synthesize schemaURL=_schemaURL;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *task_id; // @synthesize task_id=_task_id;
- (void).cxx_destruct;

@end

