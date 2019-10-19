//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSString;

@interface AWENonStandardAdModel : MTLModel <MTLJSONSerializing>
{
    NSString *_title;
    AWEURLModel *_imageURL;
    NSString *_openURL;
    NSString *_webURL;
    NSString *_webTitle;
}

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) AWEURLModel *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

