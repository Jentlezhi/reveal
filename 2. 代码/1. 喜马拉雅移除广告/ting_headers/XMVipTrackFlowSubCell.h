//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class XMScrollLabel, XMSoundItem, XMVipBookPlayBtn, XMVipTrackFlowItem, YYLabel;
@protocol XMVipTrackFlowCellDelegate;

@interface XMVipTrackFlowSubCell : UICollectionViewCell
{
    id <XMVipTrackFlowCellDelegate> _delegate;
    XMSoundItem *_soundItem;
    XMVipTrackFlowItem *_flowItem;
    long long _index;
    XMVipBookPlayBtn *_playBtn;
    XMScrollLabel *_label;
    YYLabel *_openAlbum;
}

@property(retain, nonatomic) YYLabel *openAlbum; // @synthesize openAlbum=_openAlbum;
@property(retain, nonatomic) XMScrollLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) XMVipBookPlayBtn *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) XMVipTrackFlowItem *flowItem; // @synthesize flowItem=_flowItem;
@property(retain, nonatomic) XMSoundItem *soundItem; // @synthesize soundItem=_soundItem;
@property(nonatomic) __weak id <XMVipTrackFlowCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openAlbumClick:(id)arg1;
- (void)updateLabel;
- (void)dealloc;

@end

