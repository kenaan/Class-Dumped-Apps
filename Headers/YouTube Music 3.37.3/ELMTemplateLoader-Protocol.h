//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;
@protocol ELMRuntimeConfig, ELMTemplateLoaderSubscriber;

@protocol ELMTemplateLoader <NSObject>
- (void)preloadTemplates;
- (void)unsubscribe:(id <ELMTemplateLoaderSubscriber>)arg1 fromTemplateURI:(NSString *)arg2;
- (void)subscribe:(id <ELMTemplateLoaderSubscriber>)arg1 toTemplateURI:(NSString *)arg2;
- (NSArray *)allURIs;
- (void)clearCachedTemplates;
- (void)cacheSerializedTemplate:(NSData *)arg1 withURI:(NSString *)arg2 runtimeConfig:(id <ELMRuntimeConfig>)arg3;
- (shared_ptr_38209d8d)cachedTemplateForURI:(NSString *)arg1;
-     // Error parsing type: v32@0:8@"NSString"16@?<v@?^{TemplateConfig=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}@"NSError">24, name: templateForURI:completionBlock:
@end

