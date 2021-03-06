//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCComposerResult;
@protocol SCNShimsDataProvider;

@protocol SCNComposerBundleManager
- (NSString *)getUrlForPath:(NSString *)arg1;
- (SCComposerResult *)getLocalResource:(NSString *)arg1 resourcePath:(NSString *)arg2;
- (void)removeItemInDiskCache:(NSString *)arg1;
- (SCComposerResult *)storeDataInDiskCache:(NSString *)arg1 data:(id <SCNShimsDataProvider>)arg2;
- (id <SCNShimsDataProvider>)loadDataFromDiskCache:(NSString *)arg1;
- (id <SCNShimsDataProvider>)loadBundleContent:(NSString *)arg1;
@end

