% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/plotting.R
\name{plot_umi_gene_call}
\alias{plot_umi_gene_call}
\title{Scatterplot of genes vs. UMI counts, colored by call}
\usage{
plot_umi_gene_call(x, alpha = 0.1, ret = FALSE)
}
\arguments{
\item{x}{An SCE object.}

\item{alpha}{A numeric value controlling the transparency of the points. 
From 0 (transparent) to 1 (no transparency).}

\item{ret}{A logical specifying whether to return the ggplot object 
or just print it out.}
}
\value{
Nothing, unless return=TRUE then a ggplot
}
\description{
Scatterplot of genes vs. UMI counts, colored by call
}
