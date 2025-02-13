//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface XMArtRecordBGMPanel : UIView
{
    CDUnknownBlockType _onPlay;
    CDUnknownBlockType _onPanel;
    long long _status;
    UILabel *_nameLabel;
    UIButton *_playButton;
}

@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType onPanel; // @synthesize onPanel=_onPanel;
@property(copy, nonatomic) CDUnknownBlockType onPlay; // @synthesize onPlay=_onPlay;
- (void).cxx_destruct;
- (void)clickAtPanel;
- (void)clickAtPlay;
- (void)updateBgmName:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

