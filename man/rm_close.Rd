% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/dist.R
\name{rm_close}
\alias{rm_close}
\title{Remove clusters close to the background distribution}
\usage{
rm_close(x, fltr = 0.1, k_init = NULL, verbose = TRUE)
}
\arguments{
\item{x}{An SCE object.}

\item{fltr}{The filter threshold between 0 and 1 
that controls the minimum distance to 
the background distribution that a cluster can have. Remove those 
centers with a distance less than this value.}

\item{k_init}{An integer specifying the k_init run(s) to remove clusters 
from. The default is to remove from all k_init values.}

\item{verbose}{Verbosity}
}
\value{
An SCE object.
}
\description{
Remove clusters with a distance less than \code{fltr} to the background. 
Distances are obtained using \code{\link{get_dist}} from either the 
initialized centers or after running EM.
The filter value is set to 0.1 by default, but it is recommended to 
set this appropriately to the your data set. A helpful way to discrminate 
background clusters from cell types is to look at the distribution. The 
distance values can be obtained with the function \code{\link{distances}}.
It is also helpful to plot them against their 
average UMI size using \code{\link{plot_dist}}. Clusters with
very low read counts are likely to from droplets with ambient RNA and the 
filter threshld should be set to exclude these while including the 
cell type clusters.
}
