//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMLiveRadioCardCell, XMLiveRadioItem;

@protocol XMLiveRadioCardDelegate <NSObject>

@optional
- (void)liveRadioCardCell:(id)arg1 playButtonPressedWithRadioItem:(XMLiveRadioItem *)arg2;
- (void)liveRadioCardClickMore:(XMLiveRadioCardCell *)arg1;
- (void)liveRadioCardClickItem:(XMLiveRadioCardCell *)arg1 withItem:(XMLiveRadioItem *)arg2;
@end

