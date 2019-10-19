//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSFeatureWithServerID-Protocol.h"

@class GMSPointOfInterestExtensions, GMSRenderOpInfo, GMSStyleTable, NSString;

@interface GMSPointOfInterest : NSObject <GMSFeatureWithServerID>
{
    vector_ed1e7c9d _absolutePositions;
    vector_d3954caf _relativePositions;
    struct Alignment _primaryRelativePosition;
    struct LabelGroup _primaryLabelGroup;
    struct LabelGroup _secondaryLabelGroup;
    _Bool _hideIconWhenPinned;
    short _rank;
    int _sourceTileZoom;
    float _minZoomLevel;
    float _maxZoomLevel;
    int _attributes;
    int _veType;
    GMSRenderOpInfo *_renderOpInfo;
    GMSPointOfInterestExtensions *_extensions;
    struct Point2D _location;
    NSString *_name;
    NSString *_snippet;
    GMSStyleTable *_overrideStyleTable;
    struct StyleID _stylingID;
    struct StyleID _layoutStylingID;
    struct FeatureID _serverID;
}

+ (id)unpackedPOIWithProto:(id)arg1 wireContext:(id)arg2;
@property(readonly, nonatomic) _Bool hideIconWhenPinned; // @synthesize hideIconWhenPinned=_hideIconWhenPinned;
@property(readonly, nonatomic) int veType; // @synthesize veType=_veType;
@property(retain) GMSStyleTable *overrideStyleTable; // @synthesize overrideStyleTable=_overrideStyleTable;
@property(readonly, nonatomic) int attributes; // @synthesize attributes=_attributes;
@property(nonatomic) float maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) float minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(readonly, nonatomic) short rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) struct StyleID layoutStylingID; // @synthesize layoutStylingID=_layoutStylingID;
@property(readonly, nonatomic) struct StyleID stylingID; // @synthesize stylingID=_stylingID;
@property(readonly, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct Point2D location; // @synthesize location=_location;
@property(readonly, nonatomic) int sourceTileZoom; // @synthesize sourceTileZoom=_sourceTileZoom;
@property(readonly, nonatomic) GMSPointOfInterestExtensions *extensions; // @synthesize extensions=_extensions;
@property(readonly, nonatomic) GMSRenderOpInfo *renderOpInfo; // @synthesize renderOpInfo=_renderOpInfo;
@property(readonly, nonatomic) struct FeatureID serverID; // @synthesize serverID=_serverID;
@property(readonly, nonatomic) const struct Alignment *primaryRelativePosition; // @synthesize primaryRelativePosition=_primaryRelativePosition;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)type;
@property(readonly, nonatomic) struct FeatureID fullFeatureID;
@property(readonly, nonatomic) NSString *query;
@property(readonly, nonatomic) STLRange_34380436 relativePositions;
@property(readonly, nonatomic) STLRange_5fcae3ea absolutePositions;
- (const struct LabelGroup *)secondaryLabelGroup;
- (const struct LabelGroup *)primaryLabelGroup;
- (_Bool)canFlip;
- (_Bool)shouldHideLabelWhenTilted;
- (_Bool)shouldShowAfterHalfZoom;
- (_Bool)isSecondaryLabelOptional;
- (_Bool)isRequired;
- (_Bool)isRequiredWithoutClobbering;
- (_Bool)isRequiredWithClobbering;
- (_Bool)isSmartMapsPOI;
- (_Bool)isAd;
- (_Bool)isIncident;
- (_Bool)isSearchResult;
- (_Bool)isClickable;
- (int)positionApplicabilityBits;
- (_Bool)isCounterfactual;
- (_Bool)isPromoted;
@property(readonly, copy) NSString *description;
- (id)initWithRenderOpInfo:(id)arg1 extensions:(id)arg2 sourceTileZoom:(int)arg3 location:(const struct Point2D *)arg4 serverID:(const struct FeatureID *)arg5 absolutePositions:(vector_ed1e7c9d *)arg6 primaryLabelGroup:(struct LabelGroup *)arg7 secondaryLabelGroup:(struct LabelGroup *)arg8 relativePositions:(vector_d3954caf *)arg9 stylingID:(const struct StyleID *)arg10 layoutStylingID:(const struct StyleID *)arg11 rank:(short)arg12 minTileZoom:(float)arg13 maxTileZoom:(float)arg14 attributes:(int)arg15 name:(id)arg16 veType:(int)arg17 hideIconWhenPinned:(_Bool)arg18 primaryRelativePosition:(const struct Alignment *)arg19;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

