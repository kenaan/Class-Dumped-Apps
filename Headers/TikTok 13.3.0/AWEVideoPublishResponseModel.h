//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface AWEVideoPublishResponseModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_statusCode;
    NSString *_uploadURL;
    NSString *_materialID;
    NSArray *_uploadURLList;
}

+ (id)uploadURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *uploadURLList; // @synthesize uploadURLList=_uploadURLList;
@property(retain, nonatomic) NSString *materialID; // @synthesize materialID=_materialID;
@property(retain, nonatomic) NSString *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(retain, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

