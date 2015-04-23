//
//  SelectedCategoryCell.h
//  Depoza
//
//  Created by Ivan Magda on 19.04.15.
//  Copyright (c) 2015 Ivan Magda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SelectedCategoryCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *leftLabel;
@property (nonatomic, weak) IBOutlet UILabel *rightDetailLabel;
@property (nonatomic, weak) IBOutlet UILabel *subtitleLabel;

@end
