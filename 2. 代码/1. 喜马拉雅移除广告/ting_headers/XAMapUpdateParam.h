//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSArray, NSString, XMMAUIComponentPosition;

@interface XAMapUpdateParam : NSObject <XMMANativeMethodParamProtocol>
{
    _Bool _hide;
    _Bool _showLocation;
    _Bool _enable3D;
    _Bool _enableRotate;
    _Bool _enableScroll;
    _Bool _enableZoom;
    _Bool _enableOverlooking;
    _Bool _showCompass;
    NSString *_mapId;
    NSString *_slaveId;
    XMMAUIComponentPosition *_position;
    NSString *_subkey;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_scale;
    NSArray *_markers;
    NSArray *_polyline;
    NSArray *_polygons;
    NSArray *_circles;
    NSArray *_controls;
    NSArray *_includePoints;
}

@property(retain, nonatomic) NSArray *includePoints; // @synthesize includePoints=_includePoints;
@property(retain, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(retain, nonatomic) NSArray *circles; // @synthesize circles=_circles;
@property(retain, nonatomic) NSArray *polygons; // @synthesize polygons=_polygons;
@property(retain, nonatomic) NSArray *polyline; // @synthesize polyline=_polyline;
@property(retain, nonatomic) NSArray *markers; // @synthesize markers=_markers;
@property(copy, nonatomic) NSString *scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *subkey; // @synthesize subkey=_subkey;
@property(nonatomic) _Bool showCompass; // @synthesize showCompass=_showCompass;
@property(nonatomic) _Bool enableOverlooking; // @synthesize enableOverlooking=_enableOverlooking;
@property(nonatomic) _Bool enableZoom; // @synthesize enableZoom=_enableZoom;
@property(nonatomic) _Bool enableScroll; // @synthesize enableScroll=_enableScroll;
@property(nonatomic) _Bool enableRotate; // @synthesize enableRotate=_enableRotate;
@property(nonatomic) _Bool enable3D; // @synthesize enable3D=_enable3D;
@property(nonatomic) _Bool showLocation; // @synthesize showLocation=_showLocation;
@property(nonatomic) _Bool hide; // @synthesize hide=_hide;
@property(retain, nonatomic) XMMAUIComponentPosition *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
@property(copy, nonatomic) NSString *mapId; // @synthesize mapId=_mapId;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

