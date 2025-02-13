//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBVideoPickerControlsTheming-Protocol.h"

@class NSString, UILabel;

@interface WBVideoCastingDeviceListTipsView : UIView <WBVideoPickerControlsTheming>
{
    _Bool _vertical;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithVertical:(_Bool)arg1;
- (void)updateWithWhiteTheme:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

