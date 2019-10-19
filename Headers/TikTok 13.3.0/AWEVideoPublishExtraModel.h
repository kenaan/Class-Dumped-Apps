//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AWEVideoPublishExtraModel : NSObject
{
    NSString *_ironManID;
    NSString *_ironManPath;
    NSString *_ironManTitle;
    NSString *_ironManDescription;
    NSString *_aliasID;
    NSString *_videoSource;
    NSString *_imageUrl;
    NSString *_cardCore;
    NSDictionary *_extraInfo;
}

@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *cardCore; // @synthesize cardCore=_cardCore;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(copy, nonatomic) NSString *aliasID; // @synthesize aliasID=_aliasID;
@property(copy, nonatomic) NSString *ironManDescription; // @synthesize ironManDescription=_ironManDescription;
@property(copy, nonatomic) NSString *ironManTitle; // @synthesize ironManTitle=_ironManTitle;
@property(copy, nonatomic) NSString *ironManPath; // @synthesize ironManPath=_ironManPath;
@property(copy, nonatomic) NSString *ironManID; // @synthesize ironManID=_ironManID;
- (void).cxx_destruct;
- (id)toUpdateDictionary;
- (id)toDictionary;
- (void)setupModelWithDic:(id)arg1;
- (id)initWithDic:(id)arg1;

@end

