//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLivePageFragment.h"

@class NSMutableArray, XMLiveMsgCollectionView;

@interface XMLiveMiddlePageFragment : XMLivePageFragment
{
    NSMutableArray *_pluginSubviews;
    XMLiveMsgCollectionView *_msgCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveMsgCollectionView *msgCollectionView; // @synthesize msgCollectionView=_msgCollectionView;
@property(retain, nonatomic) NSMutableArray *pluginSubviews; // @synthesize pluginSubviews=_pluginSubviews;
- (void)clearAllSubViewInPlugView;
- (void)checkLayoutOfAllPlugInView;
- (void)updateBottomOfMsgCollectionView:(double)arg1;
- (id)plugViewAt:(unsigned long long)arg1;
- (void)removeView:(id)arg1 fromPlugIn:(unsigned long long)arg2;
- (void)relayoutPlugInView:(id)arg1;
- (void)updatePlugViewAt:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)addView:(id)arg1 atPlugIn:(unsigned long long)arg2 withSizeFit:(struct CGSize)arg3;
- (void)resetLayoutConstrants;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

