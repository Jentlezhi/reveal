//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray;

@interface XMDubShowMSCollectionFlowLayout : UICollectionViewFlowLayout
{
    NSArray *_leftAlignSections;
    double _leftOffset;
}

@property(nonatomic) double leftOffset; // @synthesize leftOffset=_leftOffset;
@property(retain, nonatomic) NSArray *leftAlignSections; // @synthesize leftAlignSections=_leftAlignSections;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

