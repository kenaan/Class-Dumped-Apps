//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDAStringUtils : NSObject
{
}

+ (id)onlyDateStringSince:(double)arg1;
+ (id)simpleDateStringSince:(double)arg1;
+ (id)decodeStringFromBase64Str:(id)arg1;
+ (void)initialize;
+ (id)paramStringForDictionary:(id)arg1;
+ (id)paramItemsForString:(id)arg1;
+ (id)jointFragmentParamsDict:(id)arg1 toURL:(id)arg2;
+ (id)parametersOfURLString:(id)arg1;
+ (id)URLStringWithString:(id)arg1 parameters:(id)arg2;
+ (id)URLQueryStringWithParameters:(id)arg1;
+ (id)URLQueryStringWithoutEncodeWithParameters:(id)arg1;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithURLString:(id)arg1;

@end
