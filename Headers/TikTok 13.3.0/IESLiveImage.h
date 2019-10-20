//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface IESLiveImage : MTLModel <MTLJSONSerializing>
{
    NSArray *_urlList;
    NSString *_uri;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_placeholderColor;
    long long _imageType;
    NSString *_openWebURL;
}

+ (id)mapImagesToPbImage:(id)arg1;
+ (id)imageWithStruct:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSString *openWebURL; // @synthesize openWebURL=_openWebURL;
@property(readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(readonly, nonatomic) NSString *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(readonly, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
- (void).cxx_destruct;
- (id)mapToPBImage;
- (id)initWithPBImage:(id)arg1;
- (id)initWithUrlList:(id)arg1 uri:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
