//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASNodeController.h"

#import "ELMController-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTNavigationCommandHandlerEntryProtocol-Protocol.h"
#import "YTWatchTransitionImageProtocol-Protocol.h"

@class ASDisplayNode, CAAnimation, ELMComponent, ELMElement, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol ELMContext;

@interface ELMNodeController : ASNodeController <YTNavigationCommandHandlerEntryProtocol, YTWatchTransitionImageProtocol, UIGestureRecognizerDelegate, ELMController>
{
    id <ELMContext> _context;
    _Bool _retainsComponent;
    _Bool _isRoot;
    ELMComponent *_weakComponent;
    ELMComponent *_strongComponent;
    NSMutableArray *_children;
    NSArray *_pendingChildren;
    NSMutableDictionary *_extendedProperties;
    NSMutableDictionary *_onNodeDidLoadBlocks;
    NSMutableDictionary *_onNodeDidLayoutBlocks;
    NSMutableDictionary *_onNodeWillCalculateLayoutBlocks;
    NSMutableDictionary *_onNodeDidEnterVisibleStateBlocks;
    NSMutableDictionary *_onNodeDidExitVisibleStateBlocks;
    NSMutableDictionary *_onNodeWillChangeHighlightBlocks;
    NSMutableDictionary *_onNodeDidPerformCustomAccessibilityActionBlocks;
    CAAnimation *_appearanceAnimation;
    double _lastAppearanceAnimationOrExitHierarchy;
    ELMElement *_element;
}

+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool isRoot; // @synthesize isRoot=_isRoot;
@property(readonly, nonatomic) ELMElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)locked_applyPropertiesWithPreviousElement:(id)arg1;
- (void)locked_diffChildren:(id)arg1;
- (void)locked_performUpdateWithElement:(id)arg1 shouldUpdate:(_Bool)arg2;
- (void)performUpdateWithElement:(id)arg1 shouldUpdate:(_Bool)arg2;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (void)willChangeHighlight:(_Bool)arg1;
-     // Error parsing type: v24@0:8r^{Command=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16, name: handleCommand:
- (void)nodeWillCalculateLayout:(CDStruct_42a63532)arg1;
- (void)nodeDidLayout;
- (void)nodeDidLoad;
- (void)didExitPreloadState;
- (void)didEnterPreloadState;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)didExitHierarchy;
- (void)didEnterHierarchy;
- (void)setOnNodeDidPerformAccessibilityCustomAction:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeWillChangeHighlight:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeDidExitVisibleState:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeDidEnterVisibleState:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeWillCalculateLayout:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeDidLayout:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setOnNodeDidLoad:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)extendedPropertyForKey:(id)arg1;
- (void)setExtendedProperty:(id)arg1 forKey:(id)arg2;
- (void)setOwningComponent:(id)arg1 retained:(_Bool)arg2;
@property(readonly, nonatomic) __weak ELMComponent *owningComponent;
- (void)setAppearanceAnimation:(id)arg1;
- (void)locked_remove:(id)arg1;
- (void)remove:(id)arg1;
- (void)locked_move:(id)arg1 toIndex:(int)arg2;
- (void)move:(id)arg1 toIndex:(int)arg2;
- (void)locked_replace:(id)arg1 with:(id)arg2;
- (void)replace:(id)arg1 with:(id)arg2;
- (void)locked_insert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)locked_append:(id)arg1;
- (void)append:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (void)updateWithElement:(id)arg1;
- (_Bool)shouldUpdateWithElement:(id)arg1;
@property(readonly, nonatomic) NSString *key;
- (void)loadNode;
- (void)dealloc;
- (id)initWithElement:(id)arg1 children:(id)arg2 context:(id)arg3;
- (id)fromView;
- (id)fromWatchTransitionImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) ASDisplayNode *node;
@property(nonatomic) _Bool shouldInvertStrongReference;
@property(readonly) Class superclass;

@end

