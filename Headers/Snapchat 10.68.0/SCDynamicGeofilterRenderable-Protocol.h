//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, SCPreviewFilterDataProviderContextData, SCUserSession;

@protocol SCDynamicGeofilterRenderable
- (void)getUIImagesWithCanvasSize:(struct CGSize)arg1 completion:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg2 contextData:(SCPreviewFilterDataProviderContextData *)arg3 dynamicContextProperties:(NSDictionary *)arg4 userSession:(SCUserSession *)arg5 displayName:(NSString *)arg6;
@end
