//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, SCWebProxyHeaderTransformLayer, SCWebProxyRequest;

@protocol SCWebProxyHeaderTransformLayerDelegate
- (NSDictionary *)proxyHeaderTransformLayer:(SCWebProxyHeaderTransformLayer *)arg1 transformResponseHeaders:(NSDictionary *)arg2 forProxyRequest:(SCWebProxyRequest *)arg3;
- (_Bool)proxyHeaderTransformLayer:(SCWebProxyHeaderTransformLayer *)arg1 shouldTransformResponseHeadersForProxyRequest:(SCWebProxyRequest *)arg2;
@end
