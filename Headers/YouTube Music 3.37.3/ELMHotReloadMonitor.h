//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol ELMContext, ELMHotReloadMonitorDelegate;

@interface ELMHotReloadMonitor : NSObject
{
    NSURL *_manifestURL;
    id <ELMContext> _context;
    _Bool _running;
    struct unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> _hashCache;
    struct unordered_map<std::__1::basic_string<char>, std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>>>> _entityCache;
    _Bool _supportHotReloadEntities;
    id <ELMHotReloadMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <ELMHotReloadMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportHotReloadEntities; // @synthesize supportHotReloadEntities=_supportHotReloadEntities;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: {HotReloadManifestRequest=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<youtube::elements::HotReloadManifestRequestEntry>=^{Arena}ii^{Rep}}}20@0:8B16, name: buildRequestPayloadWithBootstrap:
- (id)allEntityURIs;
- (void)enqueueFetchManifest;
- (void)fetchManifestWithBootstrap:(_Bool)arg1;
-     // Error parsing type: v32@0:8r^{EntitySet=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<youtube::elements::Entity>=^{Arena}ii^{Rep}}}16r^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}24, name: processEntitySet:uri:
- (void)processResponse:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithBaseURL:(id)arg1 context:(id)arg2;

@end

