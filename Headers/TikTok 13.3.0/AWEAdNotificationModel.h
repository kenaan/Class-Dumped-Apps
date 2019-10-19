//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWEAdNotificationModel : AWEBaseApiModel
{
    NSString *_title;
    NSString *_content;
    NSString *_schemaURL;
    NSString *_webURL;
    AWEURLModel *_imageURL;
    double _contentW;
    double _contentH;
}

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double contentH; // @synthesize contentH=_contentH;
@property(nonatomic) double contentW; // @synthesize contentW=_contentW;
@property(retain, nonatomic) AWEURLModel *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *schemaURL; // @synthesize schemaURL=_schemaURL;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

