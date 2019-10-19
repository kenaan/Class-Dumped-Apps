//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface GADOAdViewResourceRequest : NSObject
{
    NSArray *_equalityHints;
    NSURL *_URL;
    NSURL *_mainDocumentURL;
    NSString *_method;
    NSDictionary *_headers;
    NSData *_body;
}

@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(readonly, copy, nonatomic) NSURL *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)dictionaryRepresentationExcludingHeaders:(id)arg1;
- (id)resourceRequestWithHeaders:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRequest:(id)arg1;
- (id)initWithResourceRequest:(id)arg1;
- (id)initWithURL:(id)arg1 mainDocumentURL:(id)arg2 method:(id)arg3 headers:(id)arg4 body:(id)arg5 equalityHints:(id)arg6;

@end

