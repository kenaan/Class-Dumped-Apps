//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSMutableDictionary, NSString;

@interface LOTAssetGroup : NSObject
{
    NSMutableDictionary *_assetMap;
    NSDictionary *_assetJSONMap;
    NSString *_rootDirectory;
    NSBundle *_assetBundle;
}

@property(readonly, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
@property(retain, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
- (void).cxx_destruct;
- (id)assetModelForID:(id)arg1;
- (void)finalizeInitialization;
- (void)buildAssetNamed:(id)arg1;
- (id)initWithJSON:(id)arg1 withAssetBundle:(id)arg2;

@end

