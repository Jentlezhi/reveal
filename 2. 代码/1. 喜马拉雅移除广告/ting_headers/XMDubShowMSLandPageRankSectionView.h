//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class XMDubShowMSLandPageRankSectionItemView, XMDubShowMSLandPageViewCellModel;

@interface XMDubShowMSLandPageRankSectionView : UIView
{
    XMDubShowMSLandPageViewCellModel *_modelRank1;
    XMDubShowMSLandPageViewCellModel *_modelRank2;
    XMDubShowMSLandPageViewCellModel *_modelRank3;
    CDUnknownBlockType _clickRankItem;
    XMDubShowMSLandPageRankSectionItemView *_itemView1;
    XMDubShowMSLandPageRankSectionItemView *_itemView2;
    XMDubShowMSLandPageRankSectionItemView *_itemView3;
}

@property(retain, nonatomic) XMDubShowMSLandPageRankSectionItemView *itemView3; // @synthesize itemView3=_itemView3;
@property(retain, nonatomic) XMDubShowMSLandPageRankSectionItemView *itemView2; // @synthesize itemView2=_itemView2;
@property(retain, nonatomic) XMDubShowMSLandPageRankSectionItemView *itemView1; // @synthesize itemView1=_itemView1;
@property(copy, nonatomic) CDUnknownBlockType clickRankItem; // @synthesize clickRankItem=_clickRankItem;
@property(retain, nonatomic) XMDubShowMSLandPageViewCellModel *modelRank3; // @synthesize modelRank3=_modelRank3;
@property(retain, nonatomic) XMDubShowMSLandPageViewCellModel *modelRank2; // @synthesize modelRank2=_modelRank2;
@property(retain, nonatomic) XMDubShowMSLandPageViewCellModel *modelRank1; // @synthesize modelRank1=_modelRank1;
- (void).cxx_destruct;
- (void)p_handleTapAction:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

