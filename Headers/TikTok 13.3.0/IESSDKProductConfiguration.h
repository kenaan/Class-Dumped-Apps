//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IESSDKProductConfiguration : NSObject
{
    NSString *_appId;
    NSString *_appSecret;
    long long _productType;
    NSString *_productName;
    NSString *_productDisplayName;
    NSArray *_installedURLSchemes;
    NSArray *_supportedURLSchemes;
    NSString *_iTunesUri;
}

@property(copy, nonatomic) NSString *iTunesUri; // @synthesize iTunesUri=_iTunesUri;
@property(retain, nonatomic) NSArray *supportedURLSchemes; // @synthesize supportedURLSchemes=_supportedURLSchemes;
@property(retain, nonatomic) NSArray *installedURLSchemes; // @synthesize installedURLSchemes=_installedURLSchemes;
@property(copy, nonatomic) NSString *productDisplayName; // @synthesize productDisplayName=_productDisplayName;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) long long productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)init;

@end

