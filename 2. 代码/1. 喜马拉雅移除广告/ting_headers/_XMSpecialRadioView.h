//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel, XMLiveRadioItem, XMWebImageView, YYLabel;

@interface _XMSpecialRadioView : UIButton
{
    XMWebImageView *_coverView;
    UILabel *_radioNameLabel;
    UILabel *_programLabel;
    YYLabel *_playsLabel;
    XMLiveRadioItem *_item;
}

@property(retain, nonatomic) XMLiveRadioItem *item; // @synthesize item=_item;
@property(retain, nonatomic) YYLabel *playsLabel; // @synthesize playsLabel=_playsLabel;
@property(retain, nonatomic) UILabel *programLabel; // @synthesize programLabel=_programLabel;
@property(retain, nonatomic) UILabel *radioNameLabel; // @synthesize radioNameLabel=_radioNameLabel;
@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

