//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDView.h"

@class IDKmzGenerator, IDPlacemark, NSSet;
@protocol IDMapViewOverlayDataProvider;

@interface IDMapView : IDView
{
    id <IDMapViewOverlayDataProvider> _overlayDataProvider;
    IDPlacemark *_highlightedPlacemark;
    NSSet *_placemarks;
    IDKmzGenerator *_kmzGenerator;
}

@property(retain, nonatomic) IDKmzGenerator *kmzGenerator; // @synthesize kmzGenerator=_kmzGenerator;
@property(retain, nonatomic) NSSet *placemarks; // @synthesize placemarks=_placemarks;
@property(retain, nonatomic) IDPlacemark *highlightedPlacemark; // @synthesize highlightedPlacemark=_highlightedPlacemark;
@property __weak id <IDMapViewOverlayDataProvider> overlayDataProvider; // @synthesize overlayDataProvider=_overlayDataProvider;
- (void).cxx_destruct;
- (void)updatePlacemarks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hidePlacemarks;
- (void)showPlacemarks;
- (void)clearPlacemarkHighlight;
- (void)highlightPlacemark:(id)arg1;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;

@end

